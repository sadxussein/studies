import textwrap


def justify(text, width):
    lines = textwrap.fill(text, width).split('\n')
    last_line = lines[-1]
    result = []
    for line in lines:
        words = line.split()
        if len(line) < width and len(words) > 1:
            spaces, rest_spaces = divmod(width - len(''.join(words)), len(words) - 1)
            # print(line, len(line), len(''.join(words)), width - len(''.join(words)), spaces, rest_spaces)
            spaces_list = [spaces * ' ' for _ in range(len(words) - 1)]
            for i in range(rest_spaces):
                spaces_list[i] = str(spaces_list[i]) + ' '
            spaces_list.append('\n')
            res_line = ''.join([f"{x}{y}" for x, y in list(zip(words, spaces_list))])
            result.append(res_line)
            # print(res_line)
            # print(spaces_list)
        else:
            res_line = line + '\n'
            # print(res_line)
            result.append(res_line)
    result[-1] = last_line
    return ''.join(result)


print(justify("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum sagittis dolor mauris, at elementum"
              " ligula tempor eget. In quis rhoncus nunc, at aliquet orci. Fusce at dolor sit amet felis suscipit"
              " tristique. Nam a imperdiet tellus. Nulla eu vestibulum urna. Vivamus tincidunt suscipit enim, nec"
              " ultrices nisi volutpat ac. Maecenas sit amet lacinia arcu, non dictum justo. Donec sed quam vel risus"
              " faucibus euismod. Suspendisse rhoncus rhoncus felis at fermentum. Donec lorem magna, ultricies a nunc"
              " sit amet, blandit fringilla nunc. In vestibulum velit ac felis rhoncus pellentesque. Mauris at tellus"
              " enim. Aliquam eleifend tempus dapibus. Pellentesque commodo, nisi sit amet hendrerit fringilla, ante"
              " odio porta lacus, ut elementum justo nulla et dolor", 15))
