/*
 * Spec: https://html.spec.whatwg.org/multipage/forms.html#the-form-element
 * MDN: https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement
 */

module Impl = (T: {type t;}) => {
  type t_htmlFormElement = T.t;

  /* TODO: elements: HTMLFormControlsCollection */
  [@get] external length: t_htmlFormElement => int;
  [@get] external name: t_htmlFormElement => string;
  [@set] external setName: (t_htmlFormElement, string) => unit = "name";
  [@get] external method: t_htmlFormElement => string;
  [@set] external setMethod: (t_htmlFormElement, string) => unit = "method";
  [@get] external target: t_htmlFormElement => string;
  [@set] external setTarget: (t_htmlFormElement, string) => unit = "target";
  [@get] external action: t_htmlFormElement => string;
  [@set] external setAction: (t_htmlFormElement, string) => unit = "action";
  [@get] external acceptCharset: t_htmlFormElement => string;
  [@set] external setAcceptCharset: (t_htmlFormElement, string) => unit = "acceptCharset";
  [@get] external autocomplete: t_htmlFormElement => string;
  [@set] external setAutocomplete: (t_htmlFormElement, string) => unit = "autocomplete";
  [@get] external noValidate: t_htmlFormElement => bool;
  [@set] external setNoValidate: (t_htmlFormElement, bool) => unit = "noValidate";
  [@get] external enctype: t_htmlFormElement => string;
  [@set] external setEnctype: (t_htmlFormElement, string) => unit = "enctype";
  [@get] external encoding: t_htmlFormElement => string;
  [@set] external setEncoding: (t_htmlFormElement, string) => unit = "encoding";

  [@send] external submit: t_htmlFormElement => unit;
  [@send] external reset: t_htmlFormElement => unit;
  [@send] external checkValidity: t_htmlFormElement => bool;
  [@send] external reportValidity: t_htmlFormElement => bool;

  /** @since 0.18.0 */ [@new] external data: T.t => Fetch.FormData.t = "FormData";
};

type t = Dom.htmlFormElement;

include Webapi__Dom__EventTarget.Impl({
  type nonrec t = t;
});
include Webapi__Dom__Node.Impl({
  type nonrec t = t;
});
include Webapi__Dom__Element.Impl({
  type nonrec t = t;
});
include Webapi__Dom__HtmlElement.Impl({
  type nonrec t = t;
});
include Impl({
  type nonrec t = t;
});
