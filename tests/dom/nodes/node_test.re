open ReasonJs.Dom;
open Node;

let node = document |> Document.createElement "strong" |> Element.rootNode;
let node2 = document |> Document.createElement "small" |> Element.rootNode;

let _ = childNodes node;
let _ = firstChild node;
let _ = lastChild node;
let _ = nextSibling node;
let _ = nodeName node;
let _ = nodeType node;
let _ = nodeValue node;
let _ = setNodeValue node None;
let _ = ownerDocument node;
let _ = parentNode node;
let _ = parentElement node;
let _ = previousSibling node;
let _ = rootNode node;
let _ = textContent node;
let _ = setTextContent node "foo";

let _ = appendChild node2 node;
let _ = cloneNode node;
let _ = cloneNodeDeep node;
let _ = compareDocumentPosition node2 node;
let _ = contains node2 node;
let _ = getRootNode node;
let _ = getRootNodeComposed node;
let _ = hasChildNodes node;
let _ = insertBefore node2 None node;
let _ = isDefaultNamespace "http://..." node;
let _ = isEqualNode node2 node;
let _ = isSameNode node2 node;
let _ = lookupPrefix node;
let _ = lookupNamespaceURI None;
let _ = normalize node;
let _ = removeChild node2 node;
