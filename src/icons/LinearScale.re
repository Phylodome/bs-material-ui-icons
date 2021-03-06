open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/LinearScale"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/LinearScaleOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/LinearScaleRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/LinearScaleSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/LinearScaleTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
