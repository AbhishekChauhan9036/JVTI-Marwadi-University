class Block:
    def __init__(self, index, timestamp, data, previous_hash):
        self.index = index
        self.timestamp = timestamp
        self.data = data
        self.previous_hash = previous_hash
        self.hash = self.compute_hash()

    def compute_hash(self):
        block_data = f"{self.index}{self.timestamp}{self.data}{self.previous_hash}"
        return haslib.sha256(block_data.endcode()).hexdigest()


if __name__ == "__main__":
    # Create the genesis Block
    genesis_block = Block(
        index= 0,
        timestamp = "2025-01-28 12:03:00",
        data = "Gensis Block Data",
        previous_hash = "0"
    )