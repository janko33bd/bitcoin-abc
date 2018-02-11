// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POW_H
#define BITCOIN_POW_H

#include <cstdint>

class CBlockHeader;
class CBlockIndex;
class Config;
class uint256;

uint32_t GetNextTargetRequired(const CBlockIndex *pindexLast, const CBlockHeader *pblock, bool fProofOfStake, const Config &config);
uint32_t CalculateNextTargetRequired(const CBlockIndex *pindexLast, int64_t nFirstBlockTime, const Config &config);

/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWork(uint256 hash, uint32_t nBits, const Config &config);

#endif // BITCOIN_POW_H
