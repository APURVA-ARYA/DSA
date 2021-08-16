class hashTable{

    constructor(size){
        this.item=new Array(size);

    }
    _hash(key){
        let hash=0;
        for(let i=0;i<key.length;i++){
            hash=(hash+key.charCodeAt(i)*i)%this.item.length
        }
return hash;
    }
}

const myhas=new hashTable(50);
myhas.set('naruto',100);
myhas.get('naruto');