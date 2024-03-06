def int32_to_ip(int32):
    binary = str(bin(int32)[2:].zfill(32))
    octets = [binary[i:i + 8] for i in range(0, 32, 8)]
    print('.'.join(map(str, [int(octet, 2) for octet in octets])))


int32_to_ip(2154959208)
int32_to_ip(0)
int32_to_ip(2149583361)