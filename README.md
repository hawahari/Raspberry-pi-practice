# Raspberry-pi-practice
All projects done with Pi 3,3B +,4 and 5 (basically ARM A processors)
## Headless setup
- For SSH login.
- For VNC viewer, go to raspi.config
- For wifi, wpa-supplicant.conf
## Node-Red
- Download from node-red pi site
- use port 1880.
##### nohup
- no hangup command
- terminal session lost doesnot effect command execution
### Raspberry pi C program
#### UDP communication
##### Server
- Create UDP socket
- Bind socket to server address.
- Wait until the datagram packet arrives from the client.
- Process the datagram packet.
- Send a reply to the client, or close the socket.
- Go back to Step 3 (if not closed).
##### Bluetooth
-hciconfig -a
<br>![Screenshot from 2024-05-09 10-48-15](https://github.com/hawahari/Raspberry-pi-practice/assets/149294262/de0b58fc-a210-403d-ae98-7fc4affe5bc9)
<br>![Screenshot from 2024-05-09 13-04-00](https://github.com/hawahari/Raspberry-pi-practice/assets/149294262/f6365f63-6615-4fa7-b5c1-a623a946ba7a)

#### Useful commands
sudo nmap -sn 192.168.1.254/24<br>
- 192.168.1.254 here refers to the default route or router of address.
