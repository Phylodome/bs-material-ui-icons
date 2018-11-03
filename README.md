# Reason bindings for Material-UI-Icons

[![npm](https://img.shields.io/npm/v/@mscharley/bs-material-ui-icons.svg)](https://www.npmjs.com/package/@mscharley/bs-material-ui-icons)

[Reason](https://reasonml.github.io/) bindings for [material-ui-icons](https://github.com/callemall/material-ui).

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation

```
yarn add @mscharley/bs-material-ui-icons
yarn add @material-ui/core
yarn add @material-ui/icons
```

Then add `@mscharley/bs-material-ui-icons` to `bs-dependencies` in your `bsconfig.json`:

```json
{
  ...
  "bs-dependencies": ["@mscharley/bs-material-ui-icons"]
}
```

## Usage

```reason
let component = ReasonReact.statelessComponent("Example");

let make = (_children) => {
  ...component,
  render: (_self) => <MscharleyBsMaterialUiIcons.Delete.Filled />
};
```
