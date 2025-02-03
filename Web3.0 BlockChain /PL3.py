import hashlib
import time

class Block:
    def __init__(self, index, previous_hash, transactions, difficulty):
        self.index = index
        self.previous_hash = previous_hash
        self.transactions = transactions
        self.timestamp = time.time()
        self.nonce = 0
        self.difficulty = difficulty
        self.hash = self.mine_block()

    def mine_block(self):
        # Find a hash that satishfies the difficulty condition of (Pow Algorithm)
        while True:
            hash_value = self.compute_hash()
            if hash_value[:self.difficulty] == '0' * self.difficulty:
                return hash_value #foud valid hash
            self.nonce += 1

    def compute_hash(self):
        # Compute the hash of block's contents
        block_content = f"{self.index}{self.previous_hash}{self.transactions}{self.timestamp}{self.nonce}"
        return hashlib.sha256(block_content.encode()).hexdigest()

transactions = "Vivan pays Sunil 10 BTC"
genesis_block = Block(0,"0",transactions,difficulty=4)

print(f"Block Mined Hash: {genesis_block.hash}")
print(f"Nonce: {genesis_block.nonce}")
print(genesis_block.timestamp)


