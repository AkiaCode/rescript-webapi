type t = Dom.wheelEvent;

include Webapi__Dom__Event.Impl({
  type nonrec t = t;
});
include Webapi__Dom__UiEvent.Impl({
  type nonrec t = t;
});
include Webapi__Dom__MouseEvent.Impl({
  type nonrec t = t;
});

[@new] external make: string => t = "WheelEvent";
[@new] external makeWithOptions: (string, Js.t({..})) => t = "WheelEvent";

[@get] external deltaX: t => float;
[@get] external deltaY: t => float;
[@get] external deltaZ: t => float;
[@get] external deltaMode: t => int;
let deltaMode: t => Webapi__Dom__Types.deltaMode =
  self => Webapi__Dom__Types.decodeDeltaMode(deltaMode(self));
