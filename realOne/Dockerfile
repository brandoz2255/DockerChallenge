FROM ubuntu:latest

# Install utilities
RUN apt-get update && apt-get install -y vim grep

# Copy the entry script into the container
COPY script.sh /usr/local/bin/script.sh

# Make the script executable
RUN chmod +x /usr/local/bin/script.sh

# Set the entry point to the script
ENTRYPOINT ["/usr/local/bin/script.sh"]

