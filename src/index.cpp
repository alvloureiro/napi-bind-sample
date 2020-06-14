#include <napi.h>
#include <string>

#include "greet.h"

Napi::String sayHello(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();

  const auto user = (std::string)info[0].ToString();
  const std::string result = hello(user);

  return Napi::String::New(env, result);
}

Napi::String sayHi(const Napi::CallbackInfo &info)
{
  Napi::Env env = info.Env();

  const auto user = (std::string)info[0].ToString();
  const std::string result = hi(user);

  return Napi::String::New(env, result);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(
      Napi::String::New(env, "sayHello"),
      Napi::Function::New(env, sayHello));
  exports.Set(Napi::String::New(env, "sayHi"),
              Napi::Function::New(env, sayHi));

  return exports;
}

NODE_API_MODULE(greet, Init);