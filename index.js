const addon = require('bindings')('greet');

exports.hello = addon.sayHello;
exports.hi = addon.sayHi;
