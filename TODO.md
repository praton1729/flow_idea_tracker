TODO:

- [ ] Need to improve the design of storing idea data.
	- Think in terms of just data not pointers.
	- Think of writing a whole struct to file with `fwrite()` and reading it
	  back with `fread()`.
- [ ] Add read/write idea blob capability.
- [ ] Add load cmd.
- [ ] Add show/edit capability for the flow graph.
	- Need to implement a keyboard controlled basic ncurses based interface
	  first.
- [x] Organize the code a bit better.
	- Try to separate lib like functions from the core application.
	- Modularize this codebase to make things reusable.
- [x] Add a recursive make build to this.
	- Should be able to build docs also.
