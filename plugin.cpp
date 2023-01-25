SKSEPluginLoad(const SKSE::LoadInterface *skse) {
    SKSE::Init(skse);

    // SKSE PLUGIN INITIALIZATION CODE BELOW
    //
    // This example prints "Hello, world!" to the Skyrim ~ console.
    // To view it, open the ~ console from the Skyrim Main Menu.
    SKSE::GetMessagingInterface()->RegisterListener([](SKSE::MessagingInterface::Message *message) {
        if (message->type == SKSE::MessagingInterface::kDataLoaded)
            RE::ConsoleLog::GetSingleton()->Print("Hello, world!");
    });
    //
    // SKSE PLUGIN INITIALIZATION CODE ABOVE

    return true;
}