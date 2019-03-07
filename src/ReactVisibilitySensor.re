[@bs.module "react-visibility-sensor"]
external reactClass : ReasonReact.reactClass = "default";

type partialVisibility = 
  | Top
  | Right
  | Bottom
  | Left;

type offset = Js.t({.
  top: int,
  left: int,
  bottom: int,
  right: int
});

let partialVisibilityToString = (partialVisibility) => switch partialVisibility {
  | Top => "top"
  | Right => "right"
  | Left => "left"
  | Bottom => "bottom"
};

let make =
  (~onChange: option(bool => unit) = ?,
   ~active: option(bool) = ?,
   ~partialVisibility: option(partialVisibility) = ?,
   ~delayedCall: option(bool) = ?,
   ~offset: option(offset) = ?,
   ~scrollCheck: option(bool) = ?,
   ~scrollDelay: option(int) = ?,
   ~scrollThrottle: option(int) = ?,
   ~resizeCheck: option(bool) = ?,
   ~resizeDelay: option(int) = ?,
   ~resizeThrottle: option(int) = ?,
   ~intervalCheck: option(bool) = ?,
   ~intervalDelay: option(int) = ?,
   ~minTopValue: option(int) = ?
  ) =>
  ReasonReact.wrapJsForReason
  (~reactClass,
   ~props=Js.Nullable.({
     "onChange": fromOption(onChange),
     "active": fromOption(active),
     "partialVisibility": fromOption(switch (partialVisibility) {
      | None => None
      | Some(pv) => Some(partialVisibilityToString(pv))
     }),
     "delayedCall": fromOption(delayedCall),
     "offset": fromOption(offset),
     "scrollCheck": fromOption(scrollCheck),
     "scrollDelay": fromOption(scrollDelay),
     "scrollThrottle": fromOption(scrollThrottle),
     "resizeCheck": fromOption(resizeCheck),
     "resizeDelay": fromOption(resizeDelay),
     "resizeThrottle": fromOption(resizeThrottle),
     "intervalCheck": fromOption(intervalCheck),
     "intervalDelay": fromOption(intervalDelay),
     "minTopValue": fromOption(minTopValue),
   })
  );