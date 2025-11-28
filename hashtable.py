Bucket_size = 7
class HashTable(object):
    
    def __init__(self, bucket):
        self.__bucket = bucket
        self.__table = [[] for _ in range(bucket)]
        
    def HashFunction(self, key):
        return (key % self.__bucket)

    def InsertItem(self, key):
        index = self.HashFunction(key)
        self.__table[index].append(key)
    
    def DeleteItem(self, key):
        index = self.HashFunction(key)
        if key not in self.__table[index]:
            return
        self.__table[index].remove(key)
    
    def displayHash(self):
        for i in range(self.__bucket):
            print("[%d]" % i, end='')
            for x in self.__table[i]:
                print(" --> %d" % x, end='')
            print()


# Drive Program
if __name__ == "__main__":
    # array that contains keys to be mapped
    a = [15, 11, 27, 8, 12]

    # Create a empty has of BUCKET_SIZE
    h = HashTable(Bucket_size)

    # insert the keys into the hash table
    for x in a:
        h.InsertItem(x)

    # delete 12 from the hash table
    h.DeleteItem(x)
    # Display the hash table
    h.displayHash()
        