import CryptoJS from "crypto-js";
/**
 * @word 要加密的内容
 * @keyWord String 服务器随机返回的关键字
 */
export function aesEncrypt(word, keyWord = "XwKsGlMcdPMEhR1B") {
	let key = CryptoJS.enc.Utf8.parse(keyWord);
	let srcs = CryptoJS.enc.Utf8.parse(word);
	let encrypted = CryptoJS.AES.encrypt(srcs, key, {
		mode: CryptoJS.mode.ECB,
		padding: CryptoJS.pad.Pkcs7,
	});
	return encrypted.toString();
}
