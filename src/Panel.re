let panel = ReasonReact.statelessComponent("Panel");

let make = (~name, _children) => {
  ...panel,
  render: _self => <div> {ReasonReact.string(name)} </div>
};
