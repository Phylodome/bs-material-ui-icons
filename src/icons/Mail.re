open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/Mail"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/MailOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/MailRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/MailSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/MailTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
