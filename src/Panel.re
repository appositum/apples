let mapper = t => {
  switch(t) {
  | (icon, link) => <a href={link}><i className={icon}></i></a>
  };
};

let info = [|
  ("fab fa-github", "https://github.com/appositum"),
  ("fab fa-gitlab", "https://gitlab.com/appositum"),
  ("fab fa-bitbucket", "https://bitbucket.org/appositum"),
  ("fab fa-twitter", "https://twitter.com/appositum"),
  ("fab fa-telegram-plane", "https://telegram.me/appositum"),
  ("fab fa-discord", "https://discordapp.com/users/146367028968554496"),
  ("fab fa-stack-overflow", "https://stackoverflow.com/users/9532099/appositum"),
  ("fab fa-dev", "https://dev.to/appositum"),
  ("fab fa-reddit-alien", "https://reddit.com/u/appositum"),
  ("fab fa-twitch", "https://twitch.tv/appositum"),
  ("fab fa-spotify", "https://open.spotify.com/user/ia3vjp7mlmtklylov6mgki8oc")
|]

let panel = ReasonReact.statelessComponent("Panel");

let make = _children => {
  ...panel,
  render: _self =>
    (
      info
      |. Belt.Array.map(mapper)
      |. ReasonReact.array
    )
};
