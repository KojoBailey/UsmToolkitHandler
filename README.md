# UsmToolkit Handler
This tool acts as a handler for [UsmToolkit](https://github.com/Rikux3/UsmToolkit), making the process of converting USM files faster and easier for users, especially those who are not comfortable with terminal-based tools.

I personally recommend you pair this with abheekd's fork of the tool on [Gitea](https://git.adawesome.tech/abheekd/usm-toolkit/releases/tag/0.7). For more information on optimising the tool to your needs, check out the [UsmToolkit article](https://jojomodding.miraheze.org/wiki/UsmToolkit) on JoJo's Bizarre Modding Wiki.

## Guide
`Handler.exe` goes into the same directory as `UsmToolkit.exe`. The EXE's location is important.

Then, all you have to do is **drag-and-drop** the USM you want to convert **onto the EXE**, and it will **automatically** run the conversion command for UsmToolkit. If you're on default settings, this will create an MP4 video in the same directory, as well as an M2V and ADX file (which is what FFmpeg converts from).

### Custom Flags
As of v1.1.0, you can customise the flags used in the conversion process, with the default flag already being `--clean`. For more information on UsmToolkit's flags, run the command `./UsmToolkit convert -h`.

To customise the flags you want, open `config.json` and look for the `flags` property. If it doesn't yet exist, the handler will automatically add it when you run it for the first time with a file. To disable all flags, just leave the value as a blank `""`.

![image](https://github.com/KojoBailey/UsmToolkitHandler/assets/50509420/38ee5a12-61c9-4db0-8758-933377463084)
