let bear = ReasonReact.statelessComponent("Bear");

let make = _children => {
  ...bear,
  render: _self => <img src="https://i.imgur.com/3KBU9ss.gif" alt="bear"/>
};
