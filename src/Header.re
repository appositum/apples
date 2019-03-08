let header = ReasonReact.statelessComponent("Header");

let make = (~title, _children) => {
  ...header,
  render: _self => <h1> {ReasonReact.string(title)} </h1>
};
