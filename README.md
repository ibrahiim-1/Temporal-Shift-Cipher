Temporal Shift Cipher Program

A simple and interactive program implementing the Temporal Shift Cipher, an encryption and decryption scheme that dynamically adjusts based on the current time. This project allows users to securely encrypt and decrypt messages using a numeric key and time-based shift.

---

Features:
- Encryption: Dynamically encrypts a message using a time-based shift and a numeric key.
- Decryption: Decrypts messages using the same encryption time and numeric key.
- Interactive Menu: Offers a persistent menu to perform multiple operations or exit the program.
- Time-Based Security: Uses the current hour and minute to create a dynamic shift value for enhanced security.

---

Usage:
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/temporal-shift-cipher.git
   cd temporal-shift-cipher
   ```
2. Compile and run the program using your preferred C++ compiler.

---

## **Program Flow**
1. **Menu Options**:
   - Encrypt a message.
   - Decrypt a message.
   - Exit the program.
2. **Encryption**:
   - Input a message and a numeric key.
   - The program calculates a dynamic shift based on the current time and encrypts the message.
3. **Decryption**:
   - Input the encrypted message, numeric key, and the original encryption time.
   - The program decrypts the message to its original form.

---

## **Example Flow**
### Encryption:
- Input:  
  - Message: `HelloWorld`  
  - Key: `5`  
  - Current Time: `14:30`
- Output:  
  - Encrypted Message: `MjqqtBtwqi`  
  - Encryption Time: `14:30`

### Decryption:
- Input:  
  - Encrypted Message: `MjqqtBtwqi`  
  - Key: `5`  
  - Encryption Time: `14:30`
- Output:  
  - Decrypted Message: `HelloWorld`

---

## **Technologies Used**
- **C++**
- **Standard Libraries**: `<iostream>`, `<string>`, `<ctime>`

---

## **How to Contribute**
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-name
   ```
3. Make changes and commit:
   ```bash
   git commit -m "Add feature-name"
   ```
4. Push changes:
   ```bash
   git push origin feature-name
   ```
5. Open a pull request.

---

## **License**
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

## **Contact**
Feel free to reach out for questions or contributions:
- **Email**: your-email@example.com
- **GitHub**: [your-username](https://github.com/your-username)

---

Replace placeholders like `your-username` and `your-email@example.com` with your actual details before uploading the README to GitHub. Let me know if you'd like further customization!
