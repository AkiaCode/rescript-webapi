type t = Dom.animationEvent;

include Webapi__Dom__Event.Impl({
  type nonrec t = t;
});

[@new] external make: string => t = "AnimationEvent";
[@new] external makeWithOptions: (string, Js.t({..})) => t = "AnimationEvent";

[@get] external animationName: t => string;
[@get] external elapsedTime: t => float;
[@get] external pseudoElement: t => string /* enum-ish */;
