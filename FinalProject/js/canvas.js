var stage = new Kinetic.Stage({
  container: 'container',
  width: window.innerWidth,
  height: window.innerHeight
});
var linePoints = [];
var layer = new Kinetic.Layer();

var line = new Kinetic.Line({
  points: linePoints,
  stroke: 'red',
  strokeWidth: 4,
  lineCap: 'round',
  lineJoin: 'round',
  draggable: true
});

stage.on('click', function(evt) {
  var points = line.getPoints();
  console.log(points);
  var mousePos = stage.getMousePosition();
  points.push({"x": mousePos.x, "y": mousePos.y});
  line.setPoints(points);
  console.log(points);
  line.remove();
  layer.add(line);
  layer.draw();
});

function changeColor()
{
  var color = document.getElementById('selectBox').value;
  console.log("changing color to " + color);
  line.setStroke(color);
  line.remove();
  layer.add(line);
  layer.draw();
}

stage.add(layer);