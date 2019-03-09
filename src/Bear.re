let bear = ReasonReact.statelessComponent("Bear");

let make = (~name, _children) => {
  ...bear,
  render: _self => <p> {ReasonReact.string(name)} </p>
};
