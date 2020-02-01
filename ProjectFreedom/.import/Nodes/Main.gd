extends Node2D

var stress = randi()%30+10
var love = randi()%30+10
var happy = randi()%30+10
var anger = randi()%30+10
var humility = randi()%30+10
var morality = randi()%30+10
var del
# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.
func _ready():
	$"Labels/Love".text = str(love)


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
func _check(numb):
	if numb > 100: numb = 100
	if numb < 0: numb = 0
	return numb

func calculate_delta():
	pass

func _on_Button1_pressed():
	del = calculate_delta()
	love *= del
	love = _check(love)
	$"Labels/Love".text = str(love)


func _on_Button2_pressed():
	pass # Replace with function body.
