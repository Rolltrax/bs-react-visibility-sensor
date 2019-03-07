open BsReactVisibilitySensor;

type state = {
  isVisibleByCSS: bool
};

type action =
  | ToggleVisibilityByCSS;

let component = ReasonReact.reducerComponent("ExampleSensor");

let make = (_children) => {
  ...component,
  initialState: () => {
    isVisibleByCSS: true
  },
  reducer: (action, state) => switch (action) {
    | ToggleVisibilityByCSS => ReasonReact.Update({isVisibleByCSS: !state.isVisibleByCSS})
  },
  render: (self) => {
    <ReactVisibilitySensor
      onChange=((isVisible) => Js.log(isVisible ? "Visible": "Invisible"))>
      <div>
        <div id="example-sensor-div" className=(self.state.isVisibleByCSS ? "is-invisible": "")>
        </div>
        <button
          onClick=((_evt) => self.send(ToggleVisibilityByCSS))>
          (ReasonReact.string("Click me to toggle CSS visibility"))
        </button>
      </div>
    </ReactVisibilitySensor>
  }
}