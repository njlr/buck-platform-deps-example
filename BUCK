cxx_binary(
  name = 'main',
  srcs = [
    'main.cpp',
  ],
  licenses = [
    'LICENSE',
  ],
  deps = [
    # '//apple:apple',
    # '//linux:linux',
  ],
  platform_deps = [
    ('default', [ '//linux:linux' ]),
    ('macosx-x86_64', [ '//apple:apple' ]),
    ('linux-x86_64', [ '//linux:linux' ]),
  ],
)
