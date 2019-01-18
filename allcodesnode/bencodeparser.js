var fs=require('fs');
var torrent= fs.readFileSync('data.torrent');
var bencode=require('bencode');

var decoded=bencode.decode(torrent);
console.log(decoded.toString('utf8'));