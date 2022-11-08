#include "../../flashmq_plugin.h"

int flashmq_plugin_version()
{
    return FLASHMQ_PLUGIN_VERSION;
}

void flashmq_plugin_remove_client(const std::string &clientid, bool alsoSession, ServerDisconnectReasons reasonCode)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_remove_client, mario!");
};

void flashmq_plugin_remove_subscription(const std::string &clientid, const std::string &topicFilter)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_remove_subscription, mario!");
};

void flashmq_continue_async_authentication(const std::weak_ptr<Client> &client, AuthResult result, const std::string &authMethod, const std::string &returnData)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_continue_async_authentication, mario!");
};

void flashmq_plugin_allocate_thread_memory(void **thread_data, std::unordered_map<std::string, std::string> &plugin_opts)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_allocate_thread_memory, mario!");
};

void flashmq_plugin_deallocate_thread_memory(void *thread_data, std::unordered_map<std::string, std::string> &plugin_opts)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_deallocate_thread_memory, mario!");
};

void flashmq_plugin_init(void *thread_data, std::unordered_map<std::string, std::string> &plugin_opts, bool reloading)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_init, mario!");
};
void flashmq_plugin_deinit(void *thread_data, std::unordered_map<std::string, std::string> &plugin_opts, bool reloading)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_deinit, mario!");
};

void flashmq_plugin_periodic_event(void *thread_data)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_periodic_event, mario!");
};

bool flashmq_plugin_alter_subscription(void *thread_data, const std::string &clientid, std::string &topic, const std::vector<std::string> &subtopics,
                                       uint8_t &qos, const std::vector<std::pair<std::string, std::string>> *userProperties)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_alter_subscription, mario!");
    return false;
};

bool flashmq_plugin_alter_publish(void *thread_data, const std::string &clientid, std::string &topic, const std::vector<std::string> &subtopics,
                                  uint8_t &qos, bool &retain, std::vector<std::pair<std::string, std::string>> *userProperties)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_alter_publish, mario!");
    return false;
};

void flashmq_plugin_client_disconnected(void *thread_data, const std::string &clientid)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_client_disconnected, mario!");
};

AuthResult flashmq_plugin_acl_check(void *thread_data, const AclAccess access, const std::string &clientid, const std::string &username,
                                    const std::string &topic, const std::vector<std::string> &subtopics, const uint8_t qos, const bool retain,
                                    const std::vector<std::pair<std::string, std::string>> *userProperties)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_acl_check, mario!");
    return AuthResult::success;
}

AuthResult flashmq_plugin_login_check(void *thread_data, const std::string &clientid, const std::string &username, const std::string &password,
                                      const std::vector<std::pair<std::string, std::string>> *userProperties, const std::weak_ptr<Client> &client)
{
    flashmq_logf(LOG_WARNING, "It's a flashmq_plugin_login_check, mario!");
    return AuthResult::success;
}
