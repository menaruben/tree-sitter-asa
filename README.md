# tree-sitter-asa
tree-sitter for [asa](https://github.com/menaruben/asa)

# notes
Make sure to copy the [queries](./queries/) where they belong.

[Helix](https://github.com/helix-editor/helix), for instance, needs to have those queries
in `~/.config/helix/runtime/queries/asa/`. More info [here](https://docs.helix-editor.com/guides/index.html).
You will also need to add this to your `~/.config/helix/languages.toml`:
```toml
[[language]]
name = "asa"
scope = "source.asa"
file-types = ["asa"]

[[grammar]]
name = "asa"

# make sure to change the rev to the latest commit
source = { git = "https://github.com/menaruben/tree-sitter-asa", rev = "3c096cec86fc43b55f84e5076c2749e481a76a93"}
```
Afterwards run the `hx --grammar fetch` and `hx --grammar build` commands.
As of now, I only have a `highlights.scm` but with asa evolving I will make sure to keep this repo up to date and add more queries. :)
