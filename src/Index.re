[@bs.val] external document: Js.t({..}) = "document";
let style = document##createElement("style");
document##head##appendChild(style);
style##innerHTML #= Style.style;

ReactDOMRe.renderToElementWithId(<App />, "root");