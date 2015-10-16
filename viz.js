/* eslint-env browser */
/* eslint-disable quotes, global-strict, no-shadow, no-console */
/* global cells, height, width */
'use strict';

var size = 40;

var WALL_TOP = 1,
    WALL_BOTTOM = 2,
    WALL_LEFT = 4,
    WALL_RIGHT = 8;


var canvas = document.getElementById('canvas');
var ctx = canvas.getContext('2d');
ctx.canvas.width = 600;
ctx.canvas.height = 600;

function renderCell(px, py, val) {
  px *= size;
  py *= size;
  if ((val & WALL_TOP) !== 0) {
    ctx.fillRect(px, py, size, 1);
  }
  if ((val & WALL_BOTTOM) !== 0) {
    ctx.fillRect(px, py + size, size, 1);
  }
  if ((val & WALL_LEFT) !== 0) {
    ctx.fillRect(px, py, 1, size);
  }
  if ((val & WALL_RIGHT) !== 0) {
    ctx.fillRect(px + size, py, 1, size);
  }
}

function renderMap() {
  for (var y = 0; y < height; y++) {
    for (var x = 0; x < width; x++) {
      renderCell(x, y, cells[y][x]);
    }
  }
}

renderMap();
