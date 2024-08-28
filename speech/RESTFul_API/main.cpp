#include "aip_sdk/speech.h"

void		ASR(aip::Speech* client);

std::string app_id = "111375003";
std::string api_key = "jA74eDSjZvN9Zj8EcEBsQbe8";
std::string secret_key = "7EQkbp11tVAY8yGR40jZtCAMJyFdO82t";

int			main()
{
	aip::Speech* client = new aip::Speech(app_id, api_key, secret_key);

	// 打印详细请求结果，可以打开查看详细请求内容
	client->setDebug(false);

	// 语音识别调用
	ASR(client);

	return 0;
}

void ASR(aip::Speech* client)
{
	std::map<std::string, std::string> options;
	std::string						   file_content;
	aip::get_file_content("../assets/16k_test.pcm", &file_content);
	Json::Value result = client->recognize(file_content, "pcm", 16000, options);
	std::cout << "语音识别本地文件结果:" << std::endl << result.toStyledString();
}
