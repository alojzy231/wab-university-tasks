function decimalToBinary(decimalNumber: number): string {
    if (decimalNumber === 0) return '0';

    let binaryResult = '';
    while (decimalNumber > 0) {
        const remainder = decimalNumber % 2;
        binaryResult = remainder.toString() + binaryResult;
        decimalNumber = Math.floor(decimalNumber / 2);
    }

    return binaryResult;
}

function decimalToTernary(decimalNumber: number): string {
    if (decimalNumber === 0) return '0';

    let ternaryResult = '';
    while (decimalNumber > 0) {
        const remainder = decimalNumber % 3;
        ternaryResult = remainder.toString() + ternaryResult;
        decimalNumber = Math.floor(decimalNumber / 3);
    }

    return ternaryResult;
}

function decimalToOctal(decimalNumber: number): string {
    if (decimalNumber === 0) return '0';

    let octalResult = '';
    while (decimalNumber > 0) {
        const remainder = decimalNumber % 8;
        octalResult = remainder.toString() + octalResult;
        decimalNumber = Math.floor(decimalNumber / 8);
    }

    return octalResult;
}

function decimalToHexadecimal(decimalNumber: number): string {
    if (decimalNumber === 0) return '0';

    const hexCharacters = '0123456789ABCDEF';
    let hexadecimalResult = '';

    while (decimalNumber > 0) {
        const remainder = decimalNumber % 16;
        hexadecimalResult = hexCharacters[remainder] + hexadecimalResult;
        decimalNumber = Math.floor(decimalNumber / 16);
    }

    return hexadecimalResult;
}

const DECIMAL_NUMBER = 346;  // Liczba zmiennoprzecinkowa w systemie dziesiętnym

const binaryNumber = decimalToBinary(DECIMAL_NUMBER);
const ternaryNumber = decimalToTernary(DECIMAL_NUMBER);
const octalNumber = decimalToOctal(DECIMAL_NUMBER);
const hexadecimalNumber = decimalToHexadecimal(DECIMAL_NUMBER);

console.log(`Liczba dziesiętna: ${DECIMAL_NUMBER}`);
console.log(`Liczba binarna: ${binaryNumber}`);
console.log(`Liczba trójkowa: ${ternaryNumber}`);
console.log(`Liczba ósemkowa: ${octalNumber}`);
console.log(`Liczba szesnastkowa: ${hexadecimalNumber}`);
