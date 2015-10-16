/* eslint-env browser */
/* eslint-disable quotes, global-strict, no-shadow */
'use strict';

var width = 10,
    height = 10,
    cells = [];

var WALL_TOP = 1,
    WALL_BOTTOM = 2,
    WALL_LEFT = 4,
    WALL_RIGHT = 8,
    WALL_ALL = WALL_TOP | WALL_BOTTOM | WALL_LEFT | WALL_RIGHT;

for (var y = 0; y < height; y++) {
  var row = [];
  for (var x = 0; x < width; x++) {
    row.push(WALL_ALL);
  }
  cells.push(row);
}

var canvas = document.getElementById('canvas');
var ctx = canvas.getContext('2d');
ctx.canvas.width = 200;
ctx.canvas.height = 200;

function renderCell(px, py, val) {
  px *= 10;
  py *= 10;
  if (val & WALL_TOP !== 0) {
    ctx.fillRect(px, py, 10, 1);
  }
  if (val & WALL_BOTTOM !== 0) {
    ctx.fillRect(px, py + 10, 10, 1);
  }
  if (val & WALL_LEFT !== 0) {
    ctx.fillRect(px, py, 1, 10);
  }
  if (val & WALL_RIGHT !== 0) {
    ctx.fillRect(px + 10, py, 1, 10);
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
