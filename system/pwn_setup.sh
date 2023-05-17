# Wallet
docker-compose -f wallet/docker-compose.yml down
docker-compose -f wallet/docker-compose.yml up -d --build

# PalletTown
docker-compose -f PalletTown/docker-compose.yml down
docker-compose -f PalletTown/docker-compose.yml up -d --build

# only_by
#docker-compose -f only_by/docker-compose.yml down
#docker-compose -f only_by/docker-compose.yml up -d --build

# basic_bof
docker-compose -f basic_bof/docker-compose.yml down
docker-compose -f basic_bof/docker-compose.yml up -d --build

# basic_rop
docker-compose -f basic_rop/docker-compose.yml down
docker-compose -f basic_rop/docker-compose.yml up -d --build

# helloflag
docker-compose -f helloflag/docker-compose.yml down
docker-compose -f helloflag/docker-compose.yml up -d --build
