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
