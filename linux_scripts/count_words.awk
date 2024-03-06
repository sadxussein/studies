BEGIN{
	lines = 0
	words = 0
	bytes = 0
}
{
	lines = lines + $1
	words = words + $2
	bytes = bytes + $3
}
END{
	print lines, words, bytes
}

