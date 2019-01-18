const fs = require('fs');
const bencode = require('bencode');

const torrent = bencode.decode(fs.readFileSync('alice.torrent'));
console.log(torrent.announce.toString('utf8'));