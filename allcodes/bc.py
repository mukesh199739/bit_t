import bencode
#import  pickle
file =open("decoded.txt","w");
x=bencode.bread('alice.torrent')
file.write(str(x))
file.close()
print("done")
