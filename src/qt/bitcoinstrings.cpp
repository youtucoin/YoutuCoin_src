#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {QT_TRANSLATE_NOOP("bitcoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
" %s\n"
"It is recommended you use the following random password:\n"
"rpcuser=YoutuCoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"YoutuCoin Alert\" admin@foo."
"com\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("bitcoin-core", "YoutuCoin version"),
QT_TRANSLATE_NOOP("bitcoin-core", "Usage:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send command to -server or YoutuCoind"),
QT_TRANSLATE_NOOP("bitcoin-core", "List commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("bitcoin-core", "YoutuCoin"),
QT_TRANSLATE_NOOP("bitcoin-core", "Options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "This help message"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify configuration file (default: YoutuCoin.conf)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify pid file (default: YoutuCoind.pid)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for connections on <port> (default: 15714 or testnet: 25714)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Find peers using internet relay chat (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("bitcoin-core", "Find peers using DNS lookup (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Stake your coins to support network and gain reward (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Sync time with other nodes. Disable if time on your system is precise e.g. "
"syncing with NTP (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Sync checkpoints policy (default: strict)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Detach block and address databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"When creating transactions, ignore inputs with value less than this "
"(default: 0.01)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("bitcoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("bitcoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("bitcoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("bitcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("bitcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Listen for JSON-RPC connections on <port> (default: 15715 or testnet: 25715)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Require a confirmations for change (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Enforce transaction scripts to use canonical PUSH operators (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a relevant alert is received (%s in cmd is replaced by "
"message)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("bitcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("bitcoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -mininput=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet %s resides outside data directory %s."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot obtain a lock on data directory %s.  YoutuCoin is probably already "
"running."),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error initializing database environment %s! To recover, BACKUP THAT "
"DIYTCTORY, then remove everything from it except for wallet.dat."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("bitcoin-core", "wallet.dat corrupt, salvage failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to sign checkpoint, wrong checkpointkey?\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading blkindex.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet requires newer version of YoutuCoin"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet needed to be rewritten: restart YoutuCoin to complete"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Importing blockchain data file."),
QT_TRANSLATE_NOOP("bitcoin-core", "Importing bootstrap blockchain data file."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("bitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Unable to bind to %s on this computer. YoutuCoin is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet unlocked for staking only, unable to create transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Sending..."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong YoutuCoin will not work properly."),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("bitcoin-core", "WARNING: syncronized checkpoint violation detected, but skipped!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: Disk space is low!"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"WARNING: Invalid checkpoint found! Displayed transactions may not be "
"correct! You may need to upgrade, or notify developers."),
};