// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/src/ReasonReact.js");
var Js_null_undefined = require("bs-platform/lib/js/js_null_undefined.js");
var ReactVisibilitySensor = require("react-visibility-sensor");

function partialVisibilityToString(partialVisibility) {
  switch (partialVisibility) {
    case 0 : 
        return "top";
    case 1 : 
        return "right";
    case 2 : 
        return "bottom";
    case 3 : 
        return "left";
    
  }
}

function make(onChange, active, partialVisibility, delayedCall, offset, scrollCheck, scrollDelay, scrollThrottle, resizeCheck, resizeDelay, resizeThrottle, intervalCheck, intervalDelay, minTopValue) {
  var partial_arg = {
    onChange: Js_null_undefined.fromOption(onChange),
    active: Js_null_undefined.fromOption(active),
    partialVisibility: Js_null_undefined.fromOption(partialVisibility !== undefined ? partialVisibilityToString(partialVisibility) : undefined),
    delayedCall: Js_null_undefined.fromOption(delayedCall),
    offset: Js_null_undefined.fromOption(offset),
    scrollCheck: Js_null_undefined.fromOption(scrollCheck),
    scrollDelay: Js_null_undefined.fromOption(scrollDelay),
    scrollThrottle: Js_null_undefined.fromOption(scrollThrottle),
    resizeCheck: Js_null_undefined.fromOption(resizeCheck),
    resizeDelay: Js_null_undefined.fromOption(resizeDelay),
    resizeThrottle: Js_null_undefined.fromOption(resizeThrottle),
    intervalCheck: Js_null_undefined.fromOption(intervalCheck),
    intervalDelay: Js_null_undefined.fromOption(intervalDelay),
    minTopValue: Js_null_undefined.fromOption(minTopValue)
  };
  var partial_arg$1 = ReactVisibilitySensor.default;
  return (function (param) {
      return ReasonReact.wrapJsForReason(partial_arg$1, partial_arg, param);
    });
}

exports.partialVisibilityToString = partialVisibilityToString;
exports.make = make;
/* ReasonReact Not a pure module */
