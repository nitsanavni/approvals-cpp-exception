Show a potential issue with approvals(?).

Note: all tests in this example fail on purpose.

[run this exapmle in gitpod](https://gitpod.io/#https://github.com/nitsanavni/approvals-cpp-exception)

# The problem

When running a failed approval test **and** a failed non-approvals test, we don't see the test failure, only the approvals diff.

**Expected:** see both failures.

# Run the Tests

## Approvals, and Example-based Tests Combined in One File
```sh
make text
```

## Only Example-based Tests
```sh
make exampleonly
```

# Prerequisites

In gitpod, these are done on init of a new workspace.

## install `CppUTest`
```sh
./install-cpputest.sh
```

## get approvals
```sh
./get-approvals.sh
```
