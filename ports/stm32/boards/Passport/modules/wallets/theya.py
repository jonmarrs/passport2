# SPDX-FileCopyrightText: © 2024 Foundation Devices, Inc. <hello@foundationdevices.com>
# SPDX-License-Identifier: GPL-3.0-or-later
#
# theya.py - Theya support
#

from .multisig_import import read_multisig_config_from_qr, read_multisig_config_from_microsd
from .multisig_json import create_multisig_json_wallet
from .generic_json_wallet import create_generic_json_wallet
from data_codecs.qr_type import QRType

TheyaWallet = {
    'label': 'Theya',
    'sig_types': [
        {'id': 'single-sig', 'label': 'Single-sig', 'addr_type': None, 'create_wallet': create_generic_json_wallet},
        {'id': 'multisig', 'label': 'Multisig', 'addr_type': None, 'create_wallet': create_multisig_json_wallet,
         'import_qr': read_multisig_config_from_qr, 'import_microsd': read_multisig_config_from_microsd}
    ],
    'export_modes': [
        {'id': 'qr', 'label': 'QR Code', 'qr_type': QRType.UR2},
        {'id': 'microsd', 'label': 'microSD', 'filename_pattern': '{xfp}-theya.json',
         'filename_pattern_multisig': '{xfp}-theya-multisig.json'}
    ],
    'export_fw_version': True,
}
