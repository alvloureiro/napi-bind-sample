# C++ NodeJS bind example

An example of how to bind a library written in C++ to NodeJS.

This example use [N-API]('https://nodejs.github.io/node-addon-api/')

Basically we are wrapping our `greet` api, that has two methods: `hi()` and `hello()`.

## Requirements

You need to install `node-gyp` package globally.

```sh
$ yarn global add node-gyp
```

## How to run

```sh
$ yarn && yarn build && yarn start
```

## References

- [gyp]('https://gyp.gsrc.io/docs/UserDocumentation.md#skeleton-of-a-typical-chromium-gyp-file')
- [N-API]('https://nodejs.github.io/node-addon-api/')
