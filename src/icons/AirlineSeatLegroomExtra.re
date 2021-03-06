open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomExtra"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomExtraOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomExtraRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomExtraSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/AirlineSeatLegroomExtraTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
