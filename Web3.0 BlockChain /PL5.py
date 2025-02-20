import hashlib
from ecdsa import SigningKey, VerifyingKey, SECP256k1

def sha256_hash(data: str) -> str:
    return hashlib.sha256(data.encode()).hexdigest()

# Generate ECDSA Keys
private_key = SigningKey.generate(curve=SECP256k1)
public_key = private_key.get_verifying_key()

transaction_data = "Sunil sends 6 BTC to Vivan"

hashed_data = sha256_hash(transaction_data)
print("Hashed Data:", hashed_data)

# sign the hashed data with private key
signature = private_key.sign(hashed_data.encode())
print("Signature:", signature.hex())

# Verify the signature using the public key
is_valid = public_key.verify(signature, hashed_data.encode())
print("Is Signature Valid?",is_valid)


