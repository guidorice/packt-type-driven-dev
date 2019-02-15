// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function appToString(app) {
  return app[/* name */0] + (" (" + (app[/* url */1] + ")"));
}

function newSignUp(app) {
  app[/* numberOfAccounts */2] = app[/* numberOfAccounts */2] + 1 | 0;
  return /* () */0;
}

var facebook = /* record */[
  /* name */"facebook",
  /* url */"https://facebook.com",
  /* numberOfAccounts */10000
];

var facebookads = /* record */[
  /* name */"facebook ads",
  /* url */"https://www.facebook.com/business",
  /* numberOfAccounts */10000
];

var messenger = /* record */[
  /* name */"messenger",
  /* url */"https://www.facebook.com/messenger",
  /* numberOfAccounts */10000
];

var instagram = /* record */[
  /* name */"instagram",
  /* url */"https://www.instagram.com",
  /* numberOfAccounts */10000
];

var google = /* record */[
  /* name */"google",
  /* url */"https://google.com",
  /* numberOfAccounts */10000
];

var gmail = /* record */[
  /* name */"gmail",
  /* url */"https://google.com/gmail",
  /* numberOfAccounts */10000
];

var googleads = /* record */[
  /* name */"google ads",
  /* url */"https://ads.google.com",
  /* numberOfAccounts */10000
];

var googleplus = /* record */[
  /* name */"google+",
  /* url */"https://plus.google.com",
  /* numberOfAccounts */10000
];

exports.appToString = appToString;
exports.newSignUp = newSignUp;
exports.facebook = facebook;
exports.facebookads = facebookads;
exports.messenger = messenger;
exports.instagram = instagram;
exports.google = google;
exports.gmail = gmail;
exports.googleads = googleads;
exports.googleplus = googleplus;
/* No side effect */
