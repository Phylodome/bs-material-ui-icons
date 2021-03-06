open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/DirectionsBike"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/DirectionsBikeOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/DirectionsBikeRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/DirectionsBikeSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/DirectionsBikeTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
